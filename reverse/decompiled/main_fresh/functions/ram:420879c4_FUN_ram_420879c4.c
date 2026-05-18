
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420879c4(int param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  int *piStack_38;
  undefined1 uStack_34;
  ushort uStack_32;
  undefined1 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 != 0) {
      uVar1 = *(ushort *)((int)param_2 + 0x26);
      bVar2 = *(int *)(*param_2 + 0x120) == 0;
      if (bVar2) {
        uVar4 = 0;
      }
      else {
        uVar4 = (undefined1)uVar1;
      }
      bVar2 = !bVar2;
      uVar3 = FUN_ram_42078e5a(param_2);
      (*(code *)&SUB_ram_40010488)(&uStack_3c,0,0x1c);
      iStack_2c = (int)(char)param_2[0x29];
      uStack_3c = (undefined1)param_1;
      iStack_28 = (int)param_2 + 0x83;
      uStack_24 = *(undefined1 *)((int)param_2 + 0x2ef);
      uStack_23 = *(undefined1 *)((int)param_2 + 0x2f3);
      uStack_32 = (ushort)(((uint)uVar1 << 0x14) >> 0x14);
      uStack_22 = *(undefined1 *)((int)param_2 + 0x15e);
      uStack_3b = bVar2;
      piStack_38 = param_2 + 1;
      uStack_34 = uVar4;
      uStack_30 = uVar3;
      FUN_ram_42092802(&uStack_3c);
      if (bVar2) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
        if (param_1 == 0) {
          if (DAT_ram_3fcc41a6 != '\0') {
            DAT_ram_3fcc41a6 = DAT_ram_3fcc41a6 + -1;
          }
        }
        else {
          DAT_ram_3fcc41a6 = DAT_ram_3fcc41a6 + '\x01';
        }
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
      }
    }
    return;
  }
  return;
}

