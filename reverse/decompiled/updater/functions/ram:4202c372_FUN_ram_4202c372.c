
int FUN_ram_4202c372(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                    int param_6,undefined4 param_7,int param_8,undefined4 param_9,int param_10,
                    undefined4 param_11)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_ram_42024c0c(param_1 + 8);
    if (iVar1 != 0) goto LAB_ram_4202c3d8;
    uVar2 = FUN_ram_42024bb6(param_1 + 8);
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (((((param_4 == 0) || (iVar1 = FUN_ram_42024c0c(param_1 + 0x20,param_4,param_5), iVar1 == 0))
       && ((param_6 == 0 || (iVar1 = FUN_ram_42024c0c(param_1 + 0x28,param_6,param_7), iVar1 == 0)))
       ) && ((param_8 == 0 || (iVar1 = FUN_ram_42024c0c(param_1 + 0x18,param_8,param_9), iVar1 == 0)
             ))) &&
     ((param_10 == 0 || (iVar1 = FUN_ram_42024c0c(param_1 + 0x10,param_10,param_11), iVar1 == 0))))
  {
    return 0;
  }
LAB_ram_4202c3d8:
  return iVar1 + -0x4080;
}

