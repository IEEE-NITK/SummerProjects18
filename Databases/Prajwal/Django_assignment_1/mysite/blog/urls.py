from django.urls import path

from . import views

urlpatterns = [
    path('', views.home, name='home'),
    path('contact_us/',views.contact_us, name='contact_us'),
]