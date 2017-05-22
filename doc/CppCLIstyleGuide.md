C++ .NET coding style
====================

[Google C++ Style]: https://google.github.io/styleguide/cppguide.html

## .NET GUI component variable naming

***Component abbreviation***+Usage:

for example:

        Label for displaying version => lblVersion

|    Component name    | *Component abbreviation* |
| ---------- | --- | 
| Label | lbl | 
| LinkLabel |  lkl |
| Textbox | txt |
| Button | btn |
| Trackbar | tkb |
| Checkbox | chb |
| Combobox | cbb |
| NumericalUpDown | nud |
| PictureBox | pic |
| RadioButton | rdb |
| BackgroundWorker | bgw |
| OpenFileDialog | ofd |
| SaveFileDialog | sfd |
| FlowLayoutPanel | flp |
| Panel | pnl |
| TabLayoutPanel | tlp |
| Tooltip | tltp |
| Progress Bar | pgb |

## Property

### Naming:

* The first world **must** be **capital**
* The public member correspond to property shoud use as **_variable**

for example:

    public:
        property System::String^ Version {
            System::String^ get() {
                return _version;
            }
            void set(System::String^ new_version) {
                _version = new_version;
            }
        }
        
    private:
        System::String^ _version = "1.9.2";   
		
## Delegate

First name should be **Del_**.

Example:
````
delegate void Del_MyCallback(String^ str);  
````

Deleagate variable should be named as **del_** + doSomething

Example:
````
MyCallback^ del_callback = gcnew MyCallback(SomeClass::Func);
````

## Event

First character of event should be **capital**.

Example: declaration
````
delegate void Del_MyCallback(String^ str);  

ref class Test {
    event Del_MyCallback^ MyCallBackStart;
    
    ......
}
````

### Others:

Please follow [Google C++ Style]
    
