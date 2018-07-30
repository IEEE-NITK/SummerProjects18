from django.urls import path
from .views import ListNotesView,OneNoteView

urlpatterns = [
    path('notes', ListNotesView.as_view(), name="all-notes"),
    path('notes/<pk>/', OneNoteView.as_view(), name='one-note')
]
