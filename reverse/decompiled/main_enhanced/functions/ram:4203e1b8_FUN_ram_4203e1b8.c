
int FUN_ram_4203e1b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_6 + 0x60))
                    (param_1 + 0x34,param_1 + 0x10,param_3,0,param_5,*(code **)(param_6 + 0x60));
  return -(uint)(iVar1 != 0);
}

