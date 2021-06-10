#include <iostream>
#include <string>  // using string constructors
#include <vector>


using namespace std;

string cmdLine{}; 
vector<string> CmdArgs{}; 
string inpfile{}, outfile{}; 

string adjustl(string str){

  //string out;
  return str = str.substr(str.find_first_not_of(" "),
  str.length()-str.find_first_not_of(" "));

}

void trim(string& str){

  //str = str.substr(0,);
  str.resize(str.find_last_not_of(" ")+1);
  

}

vector<string> split(string in)
{
    vector<string> out;
    for (int i = 0; i < in.size();)
    {
        // Increment i until we find a non-whitespace character.
        if (std::isspace(in[i]))
        {
            i++;
        }
        else
        {
            // Find the next whitespace character at j.
            int j = i + 1;
            while (j < in.size() && std::isspace(in[j]) == 0)
            {
                j++;
            }

            // Push-back everything between i and j.
            out.push_back(in.substr(i, j - i));
            i = j + 1; // j is whitespace so leapfrog to j+1
        }
    }
    return out;
};

int commandline(string str)
{

    cout << cmdLine << endl;
    //  subroutine commandline(str, inpfl,outpfl)
    int i, n;
    //character(*) :: str , inpfl,outpfl
    vector<string> wrd, compare;

    bool file_exists;

    wrd = split(str);
  //  compare = "-h";

/*     return 0;

    inpfile = '' ;
    outfile = ''; */

    for (i = 0; i < wrd.size(); i++)
    {
       // cout <<  << endl;
       if(wrd[i] == "-h") cout << "sac" << endl;
/*         if (wrd.at(i) == 0)
        {
            cout << "repeat('-',80)" << endl;
            cout << 'MCkeff - Monte Carlo Keff    ' << endl;
            cout << "repeat('-',80)" << endl;
         

            cout << 'Usage: mckeff   i=<InputFile>  [To specify user input file.]' << endl;
            cout << '                o=<OutputFile> [To specify user output file.]' << endl;
            
            cout << '                -p             [To get Geometry plot Windows OS].' << endl;
            cout << '                -c <#n>        [To specify number of threads, #n is number of threads].' << endl;
            cout << '                -h             [To print this help message.]' << endl;
            return 0;
        } */
    }

    /*     do i = 1, n
      if(wrd(i)=='-h')then

      write(*,*)repeat('-',80)
      write(*,*)'MCkeff - Monte Carlo Keff    '
      write(*,*)repeat('-',80)
      write(*,*)

      print*,'Usage: mckeff   i=<InputFile>  [To specify user input file.]'
      print*,'                o=<OutputFile> [To specify user output file.]'
      print*,''
      print*,'                -p             [To get Geometry plot Windows OS].'
      print*,'                -c <#n>        [To specify number of threads, #n is number of threads].'
      print*,'                -h             [To print this help message.]'
      stop
      elseif(wrd(i) == 'i')then
        inpfl = sset(wrd(i+1))
      elseif(wrd(i) == 'o')then
        outpfl = sset(wrd(i+1))
      elseif(wrd(i) == '-p')then
        plotting = .true.
#ifdef LINUX
  call fatal('Plotting available for Windows operating systems only',0)
#endif
      elseif(wrd(i) == '-po')then
        plotting_old = .true. ;  plotting = .true.
#ifdef LINUX
  call fatal('Plotting available for Windows operating systems only',0)
#endif
      elseif(wrd(i) == '-c')then
        if(.not. is_pint(wrd(i+1))) &
        call fatal('Number of threads with -c option is not a positive integer')
        n_threads = to_pint(sset(wrd(i+1)))
      elseif(wrd(i) == 'mckeff' .or. wrd(i) == 'mckeff.exe' .or. wrd(i)=='./mckeff')then ! check on linux1111111111111111111111111
        continue
      elseif(wrd(i)=='pc')then
        pc = to_int(sset(wrd(i+1)))
      end if
    end do

    if(len_trim(inpfl)  == 0)inpfl  = 'inp'
    if(len_trim(outpfl) == 0)then
      i = 0
      do
        i = i + 1
        outpfl = 'out'//sset(to_str(i))
        inquire(file=outpfl,exist=file_exists)
        if(pc >= 1 .and. i==1 .and. .not. file_exists)print*,'out1 created'
        if(pc >=1 .and. i /= 1)print*,'out'//sset(to_str(i-1))//&
        ' exists checking for out'//sset(to_str(i))
        if(.not. file_exists .and. pc > 0)&
        print*,'outputfile: '//'out'//sset(to_str(i))
        if(.not. file_exists)exit
      end do
    end if
  end subroutine */

    return 0;
};

int main()
{

    cmdLine = "      mckeff -h     ";
    //    CmdArgs = split(commandline);
    //    inpfile = "something";

    //commandline(cmdLine);
    cout << cmdLine.find_last_not_of(" ") << endl;
    trim(cmdLine);
    cout << cmdLine << cmdLine.length() <<endl;

    return 0;
}