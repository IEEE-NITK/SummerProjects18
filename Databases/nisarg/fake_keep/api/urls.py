from django.urls import path
from .views import *

urlpatterns = [
    path('notes', ListCreateNotesView.as_view(), name="ListCreateNotes"),
    path('notes/<pk>', CRUDNotesView.as_view(), name="CRUDNotes"),
]
