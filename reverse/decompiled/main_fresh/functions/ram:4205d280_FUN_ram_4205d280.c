
int FUN_ram_4205d280(uint *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *apuStack_48 [2];
  uint uStack_40;
  
  iVar2 = -0xb;
  if (param_1[4] != 0) {
    bVar1 = (byte)param_1[10];
    iVar2 = -0xb;
    if ((bVar1 & 8) == 0) {
      if ((char)bVar1 < '\0') {
        *(byte *)(param_1 + 10) = bVar1 & 0x7f;
      }
      else {
        iVar2 = FUN_ram_4205d14a();
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = *param_2;
        if ((param_3 & 8) == 0) {
          uVar3 = 1;
          if (iVar2 != 0) {
            uVar3 = (uint)*(ushort *)(iVar2 + 8);
          }
          if ((*param_1 & 0xf0) == 0x10) {
            apuStack_48[0] = param_1;
            uStack_40 = uVar3;
            FUN_ram_4205cd16(0x4204e412,apuStack_48);
          }
        }
        if (iVar2 != 0) {
          return 0;
        }
        if ((param_3 & 0x10) != 0) {
          *(byte *)(param_1 + 10) = (byte)param_1[10] | 0x80;
          return -7;
        }
      }
      if ((code *)param_1[0xc] != (code *)0x0) {
        (*(code *)param_1[0xc])(param_1,1,0);
      }
      if (param_1[2] == 0) {
        iVar2 = FUN_ram_4205d02a(param_1);
        if (iVar2 == 0) {
          iVar2 = -0xe;
        }
      }
      else {
        FUN_ram_4205cd4e(param_1,1);
        iVar2 = -0xf;
      }
    }
  }
  return iVar2;
}

