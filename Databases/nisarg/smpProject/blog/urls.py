from django.urls import path
from . import views

urlpatterns = [
    path('', views.HomePageView.as_view(), name='home'),
    path('contactUs/', views.ContactUsView.as_view(), name='contactUs')
]
