
# Register your models here.
from django.contrib import admin

from .models import Question,Choice

admin.site.register(Question)
admin.site.register(Choice)
