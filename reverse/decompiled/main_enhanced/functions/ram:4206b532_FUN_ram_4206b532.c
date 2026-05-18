
int FUN_ram_4206b532(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_2 != 0)) {
    iVar2 = FUN_ram_4206aa52();
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*param_1 != 0) {
      bVar1 = *(byte *)(*param_1 + 6);
      if (bVar1 < 5) {
        if (1 < bVar1) {
LAB_ram_4206b57c:
          iVar2 = FUN_ram_4206d7ce(1,0x24);
          if (iVar2 != 0) {
            param_1[0x10] = iVar2;
            FUN_ram_4206d7da(iVar2,0x10);
            return 0;
          }
          return -0x6180;
        }
      }
      else if (bVar1 == 0x24) goto LAB_ram_4206b57c;
    }
  }
  return -0x6100;
}

