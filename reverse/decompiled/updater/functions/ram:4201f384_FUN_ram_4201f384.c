
void FUN_ram_4201f384(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)&SUB_ram_400107fc)(0xffffffff,param_1,4);
  uVar1 = (*(code *)&SUB_ram_400107fc)(uVar1,param_1 + 8,0x10);
  (*(code *)&SUB_ram_400107fc)(uVar1,param_1 + 0x18,8);
  return;
}

