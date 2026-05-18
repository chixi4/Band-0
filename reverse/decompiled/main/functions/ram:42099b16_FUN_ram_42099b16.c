
void FUN_ram_42099b16(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_cc [44];
  int iStack_a0;
  int iStack_9c;
  undefined1 auStack_98 [104];
  
  param_1[4] = 8;
  param_1[0xf] = 0;
  *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) & 0xbe | 1;
  (*(code *)&SUB_ram_40010488)(auStack_98,0,0x68);
  iVar5 = 0x20;
  piVar1 = (int *)0x0;
  piVar4 = param_1 + 2;
  do {
    if (((param_1[0x81] & 0x4000d42U) == 0) || ((param_1[0x81] & 0x4000c00U) != 0)) {
      iVar5 = param_1[0x2c];
      piVar1 = param_1 + 0x24;
    }
    else {
      piVar1 = (int *)FUN_ram_42099aee(piVar4,piVar1);
      if (piVar1 == (int *)0x0) {
LAB_ram_42099ba0:
        FUN_ram_4039c11e(auStack_cc,piVar4,6);
        FUN_ram_420b2e88(0x8000c000,0x2d,auStack_cc,6,0);
        return;
      }
    }
    FUN_ram_4209c762(piVar1,iVar5,&DAT_ram_3c0c4b5c,*param_1 + 0x78,piVar4,param_1 + 0x14,
                     param_1 + 0x1c,auStack_98,param_1[0x81],param_1[0x80]);
    iVar2 = FUN_ram_42099840(param_1[0x81],auStack_98,param_1[0x6b],param_1[0x6c]);
    if (iVar2 == 0) {
      iVar2 = param_1[0x6b];
      uVar3 = (uint)*(byte *)(iVar2 + 0x62) | (*(ushort *)(iVar2 + 0x61) & 0xff) << 8;
      if (param_1[0x6c] - 99U < uVar3) {
        return;
      }
      iVar2 = FUN_ram_4209bac6(iVar2 + 99,uVar3,auStack_cc);
      if (iVar2 < 0) {
        return;
      }
      if (param_1[0x7d] != 0) {
        if ((iStack_a0 == 0) || (param_1[0x7e] != iStack_9c)) goto LAB_ram_42099c30;
        iStack_a0 = FUN_ram_4039c0e0();
      }
      if (iStack_a0 == 0) {
        param_1[0x83] = 0;
        FUN_ram_420992a6(0x4208997e,param_1[0x84],0);
        if (((param_1[0x81] & 0x4000d42U) != 0) && (piVar1 != param_1 + 0x24)) {
          FUN_ram_4039c11e(param_1 + 0x24,piVar1,iVar5);
        }
        param_1[0x12] = 1;
        FUN_ram_4039c11e(param_1 + 0x31,auStack_98,0x68);
        param_1[0x4b] = 1;
        return;
      }
LAB_ram_42099c30:
      FUN_ram_4207f6bc(piVar4,2);
      return;
    }
    if (((param_1[0x81] & 0x4000d42U) == 0) || ((param_1[0x81] & 0x4000c00U) != 0))
    goto LAB_ram_42099ba0;
  } while( true );
}

