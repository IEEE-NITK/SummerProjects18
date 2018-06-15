from django.db import models

class Note(models.Model):
    title = models.CharField(max_length=1024, null=False)
    body = models.CharField(max_length=2048, null=False)

    def __str__(self):
        return "{} | {}".format(self.title, self.body)
