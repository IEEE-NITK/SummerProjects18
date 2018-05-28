from django.conf.urls import url
from . import views # Imports all functions from views.py
#Specify all the urls in the first app and here ' ' ie default path is associated with index function from views
urlpatterns = [
    url(r'^$', views.index, name='index'), 
]
