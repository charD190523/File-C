 
int main ()
{
    int n,dem,check;
    dem=0;
    check=1;
    scanf("%d",&n);
    while (check) {
        if (n!=fb(dem)&& fb(dem)<=n) {
            dem++;

        }
        else if (n== fb(dem) && fb(dem<=n)) {

            printf("%d",1);
            break;
        }
        else {
            printf("%d",0);
            check=0;
        }
            
    }
}