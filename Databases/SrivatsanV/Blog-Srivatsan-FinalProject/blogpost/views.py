from django.shortcuts import render
from rest_framework import generics
from .models import Post
from .serializers import PostSerializer
class PostCreate(generics.ListCreateAPIView):
    queryset = Post.objects.all()
    serializer_class = PostSerializer

class PostUpdateAndDelete(generics.RetrieveUpdateDestroyAPIView):
    queryset = Post.objects.all()
    serializer_class = PostSerializer

