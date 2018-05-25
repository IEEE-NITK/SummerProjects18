from django.shortcuts import render
from django.http import HttpResponse


def home(request):
    #return HttpResponse("This is blog app's home view.")
    return render(request,'home.html')

def contact_us(request):
    #return HttpResponse("This is blog app's contact us view.")
    return render(request,'contact_us.html')    

# Create your views here.
