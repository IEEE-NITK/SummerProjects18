from rest_framework import serializers
from .models import Author, Post


class AuthorSerializer(serializers.ModelSerializer):
    class Meta:
        model = Author
        fields = '__all__'


class PostSerializer(serializers.Serializer):
    author = serializers.IntegerField(required=False)
    published_at = serializers.DateTimeField(required=False)
    title = serializers.CharField()
    content = serializers.CharField()

    def create(self, validated_data):
        author = Author.objects.get(pk=validated_data['author'])
        author.num_posts += 1
        author.save()

        Post(author=Author.objects.get(pk=validated_data['author']), title=validated_data['title'], content=validated_data['content'])
        response = dict()
        response['author'] = validated_data['author']
        response['title'] = validated_data['title']
        response['content'] = validated_data['content']
        return response

    def update(self, instance, validated_data):
        instance.title = validated_data.get('title', instance.title)
        instance.content = validated_data.get('content', instance.content)
        instance.save()

        response = dict()
        response['title'] = instance.title
        response['content'] = instance.content
        return response
