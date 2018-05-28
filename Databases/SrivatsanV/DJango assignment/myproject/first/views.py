from django.shortcuts import render

"""Create your views here.
from django.shortcuts import render
from django.http import HttpResponse
def index(request):
    return HttpResponse("Hello, world.")"""

from django.views.generic import TemplateView


class HomePageView(TemplateView):
    template_name = 'home.html'

class ContactPageView(TemplateView):
    template_name = 'contactus.html'
