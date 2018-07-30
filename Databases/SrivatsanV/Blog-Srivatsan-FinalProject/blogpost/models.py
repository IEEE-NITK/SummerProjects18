from django.db import models


"""class Author(models.Model):
    user = models.CharField(blank=False, null=False, max_length=32)
    email = models.TextField(blank=True, null=True)"""

class Post(models.Model):
    author = models.CharField(blank=False, null=False, max_length=32)
    email = models.TextField(blank=True, null=True)
    title = models.CharField(max_length=255)
    body = models.TextField(blank=True, null=True)
    #category = models.CharField(blank=False, null=False, max_length=32)
    def __str__(self):
        return "{} | {} | {} | {} ".format(self.author,self.email,self.title, self.body)



