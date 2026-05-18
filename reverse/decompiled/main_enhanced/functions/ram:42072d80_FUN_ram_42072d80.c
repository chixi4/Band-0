
int FUN_ram_42072d80(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if ((param_6 != 0) && (param_6 == *param_2)) {
    iVar1 = FUN_ram_42068514(param_1 + 0x68,param_2 + 0x1a);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_42068514(param_1 + 0x70,param_2 + 0x1c);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_42068514(param_1 + 0x78,param_2 + 0x1e);
        if (iVar1 == 0) {
          FUN_ram_42072140(&stack0x00000008);
          FUN_ram_42072162(&stack0x00000020);
          FUN_ram_420722c2(&stack0x00000020,param_2);
          iVar1 = FUN_ram_4207279c(&stack0x00000020,&stack0x00000008,param_2 + 0x18,param_2 + 7,
                                   param_3,param_4);
          if (iVar1 == 0) {
            iVar1 = FUN_ram_42068514(&stack0x00000008,param_2 + 0x1a);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_ram_42068514(&stack0x00000010,param_2 + 0x1c), iVar1 == 0)) {
              iVar2 = FUN_ram_42068514(&stack0x00000018,param_2 + 0x1e);
              iVar1 = 0;
              if (iVar2 == 0) goto LAB_ram_42072e3e;
            }
            iVar1 = -0x4f80;
          }
LAB_ram_42072e3e:
          FUN_ram_420720be(&stack0x00000008);
          FUN_ram_420721ea(&stack0x00000020);
          return iVar1;
        }
      }
    }
  }
  return -0x4f80;
}

