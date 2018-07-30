from django.db import models

# Create your models here.

class Note(models.Model):
    title = models.CharField(max_length=256,null=False)
    body = models.TextField(null=False)

    def __str__(self):
        return "{}|{}".format(self.title,self.body)
