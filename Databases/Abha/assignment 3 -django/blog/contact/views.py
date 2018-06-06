
# Create your views here.

from django.http import HttpResponse
def index(request):
    return HttpResponse("<h1><centre> For more information , contact the following:<BR> <h2> Mrs XYZ <BR> <h3>1234567891 <BR><BR> <h4>Mr ABC <BR><h5> 2314131211")
