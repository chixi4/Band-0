
void FUN_ram_4201f3bc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)&SUB_ram_400107fc)(0xffffffff,param_1,1);
  uVar1 = (*(code *)&SUB_ram_400107fc)(uVar1,param_1 + 8,0x10);
  (*(code *)&SUB_ram_400107fc)(uVar1,param_1 + 3,1);
  return;
}

