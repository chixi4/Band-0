
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42087eec(int *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_1c [6];
  undefined1 uStack_16;
  undefined1 uStack_15;
  short sStack_14;
  
  if ((param_1 == (int *)0x0) || (iVar3 = *param_1, iVar3 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0ff060,"phone farther away first.",0xb1a);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0x4f);
  if (*(int **)(iVar3 + 0xec) == param_1) {
    return;
  }
  if (*(char *)((int)param_1 + 0x2f9) != '\0') {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0xc1);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0xc6);
  }
  if ((*(ushort *)((int)param_1 + 0x26) & 0x3fff) == 0) {
    FUN_ram_4207a038(1,4,3,&DAT_ram_3c100060,(char)param_1[1],*(undefined1 *)((int)param_1 + 5),
                     *(undefined1 *)((int)param_1 + 6),*(undefined1 *)((int)param_1 + 7),
                     (char)param_1[2],*(undefined1 *)((int)param_1 + 9),0);
  }
  else {
    FUN_ram_4207a038(1,4,3,&DAT_ram_3c100000,(char)param_1[1],*(undefined1 *)((int)param_1 + 5),
                     *(undefined1 *)((int)param_1 + 6),*(undefined1 *)((int)param_1 + 7),
                     (char)param_1[2],*(undefined1 *)((int)param_1 + 9),
                     *(ushort *)((int)param_1 + 0x26) & 0x3fff,(short)param_1[0xec],param_1[3],
                     param_1);
  }
  if ((param_1[3] & 1U) != 0) {
    sVar1 = *(short *)((int)param_1 + 0x26);
    if (sVar1 == 0) goto LAB_ram_4208805e;
    FUN_ram_4039c11e(auStack_1c,param_1 + 1,6);
    sStack_14 = (short)param_1[0xec];
    uStack_16 = (undefined1)sVar1;
    uStack_15 = 0;
    if (sStack_14 == 0) {
      sStack_14 = 1;
    }
    FUN_ram_4208344a(0xf,auStack_1c,10);
  }
  if ((param_1[3] & 0x10U) != 0) {
    FUN_ram_420799d0(param_1,0);
  }
  FUN_ram_420879c4(0,param_1);
  _DAT_ram_3fcc4170 = ~(ushort)(1 << (*(ushort *)((int)param_1 + 0x26) & 0x1f)) & _DAT_ram_3fcc4170;
  piVar2 = *(int **)(iVar3 + 0xec);
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  if (piVar2 != param_1) {
    param_1[3] = param_1[3] & 0xfffffffe;
  }
  FUN_ram_4207c908(0);
LAB_ram_4208805e:
  FUN_ram_4208785a(param_1);
  return;
}

