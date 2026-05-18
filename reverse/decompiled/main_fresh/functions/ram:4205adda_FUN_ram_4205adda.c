
undefined4 FUN_ram_4205adda(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *extraout_a2;
  undefined2 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined2 uStack_18;
  undefined1 uStack_16;
  byte bStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  uVar8 = CONCAT44(param_2,param_1);
  if (param_1 != 0) goto LAB_ram_4205adee;
  do {
    uVar8 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
LAB_ram_4205adee:
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    iVar1 = (int)uVar8;
  } while ((iVar4 == 0) || (param_3 == (uint *)0x0));
  iVar2 = FUN_ram_4205be44(*param_3,iVar1);
  if (iVar2 == 0) {
    uVar6 = *param_3;
    if ((uVar6 & 0xf0) != 0xe0) {
      if ((((*(uint *)(iVar1 + 4) ^ uVar6) & *(uint *)(iVar1 + 8)) != 0) &&
         ((uVar6 & 0xffff) != 0xfea9)) {
        if (*(int *)(iVar1 + 0xc) == 0) {
          return 0xfffffffc;
        }
        param_3 = (uint *)(iVar1 + 0xc);
      }
      uVar6 = (uint)DAT_ram_3fcc5344;
      iVar2 = uVar6 * 0x18;
      puVar7 = &DAT_ram_3fcc2578;
      if ((((byte)(&DAT_ram_3fcc258c)[iVar2] < 2) || (*(int *)(&DAT_ram_3fcc2580 + iVar2) != iVar1))
         || (*param_3 != *(uint *)(&DAT_ram_3fcc257c + iVar2))) {
        uVar6 = 0;
        while ((((byte)puVar7[0x14] < 2 || (*(int *)(puVar7 + 8) != iVar1)) ||
               (*param_3 != *(uint *)(puVar7 + 4)))) {
          uVar6 = uVar6 + 1 & 0xff;
          puVar7 = puVar7 + 0x18;
          if (uVar6 == 10) {
            uVar3 = FUN_ram_4205ac4c(iVar1,param_3,iVar4);
            return uVar3;
          }
        }
        DAT_ram_3fcc5344 = (byte)uVar6;
      }
      uVar3 = FUN_ram_4205aba4(iVar1,iVar4,uVar6);
      return uVar3;
    }
    uStack_18 = 1;
    uStack_16 = 0x5e;
    puVar5 = &uStack_18;
    bStack_15 = *(byte *)((int)param_3 + 1) & 0x7f;
    uStack_14 = *(undefined1 *)((int)param_3 + 2);
    uStack_13 = *(undefined1 *)((int)param_3 + 3);
  }
  else {
    puVar5 = (undefined2 *)&DAT_ram_3c0f759c;
  }
  uVar3 = FUN_ram_4205c318(iVar1,iVar4,iVar1 + 0x32,puVar5,0x800);
  return uVar3;
}

