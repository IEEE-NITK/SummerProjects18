from django.shortcuts import render
from rest_framework import generics
from .models import Note
from .serializers import NoteSerializer


class ListNotesView(generics.ListCreateAPIView):
    queryset = Note.objects.all()
    serializer_class = NoteSerializer

class OneNoteView(generics.RetrieveUpdateDestroyAPIView):
    queryset = Note.objects.all()
    serializer_class = NoteSerializer


