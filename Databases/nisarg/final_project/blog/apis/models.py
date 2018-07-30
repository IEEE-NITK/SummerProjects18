from django.db import models


class Author(models.Model):
    id = models.AutoField(primary_key=True)
    name = models.CharField(blank=False, null=False, max_length=32)
    description = models.TextField(blank=True, null=True)
    num_posts = models.IntegerField(default=0, blank=True, null=True)


class Post(models.Model):
    id = models.AutoField(primary_key=True)
    author = models.ForeignKey(Author, on_delete=models.CASCADE)
    published_at = models.DateTimeField(auto_now=True, null=True)
    title = models.CharField(blank=False, null=False, max_length=256)
    content = models.TextField(blank=False, null=False)
