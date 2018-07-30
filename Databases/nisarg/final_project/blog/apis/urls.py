from django.urls import path, include
from apis import views

urlpatterns = [
    path('authorListCreate/', views.AuthorListCreate.as_view(), name='ListCreateAuthor'),
    path('authorCRUD/<pk>/', views.AuthorCRUD.as_view(), name='CRUDAuthor'),
    path('postListCreate/', views.PostListCreate.as_view(), name='ListCreatePost'),
    path('postCRUD/<pk>/', views.PostCRUD.as_view(), name='CRUDPost'),

]
