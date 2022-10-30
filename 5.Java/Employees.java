class Employees {
	private String name;
	private int salary; 
	
	 public String getName() {
			return name;
		}
	     public void setName(String name) {
	 		this.name = name;
	 	}
	     public int getSalary() {
			return salary;
		}
	    
	     public void setSalary(int salary) {
		   this.salary=salary;
		}
  }
 public class Employee	{
	public static void main(String[] args) {
	    Employees e =new Employees();
	    e.setName("principal");
	    e.getSalary(5);
	    
	    System.out.println("name: "+e.getName());
	    System.out.println("salary: "+e.getSalary());
	   
	}

}
