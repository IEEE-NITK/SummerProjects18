from django.urls import path, include
from .views import PostCreate,PostUpdateAndDelete

urlpatterns = [
    path('post/', PostCreate.as_view(), name='ListCreatePost'),
    path('delORupdate/<pk>/', PostUpdateAndDelete.as_view(), name='DelOrUpdatePost'),
]
