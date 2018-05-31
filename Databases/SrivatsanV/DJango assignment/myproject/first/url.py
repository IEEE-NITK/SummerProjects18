from django.urls import path
from . import views # Imports all functions from views.py
# Specify all the urls in the first app and here ' ' ie default path is associated with index function from views
urlpatterns = [
    path('', views.HomePageView.as_view(), name='home'), 
    path('contactus/', views.ContactPageView.as_view(), name='contactus'), 
]
