
undefined4 FUN_ram_4205adda(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined2 uStack_18;
  undefined1 uStack_16;
  byte bStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (uint *)0x0)) {
    iVar1 = FUN_ram_4205be44(*param_3,param_1);
    if (iVar1 == 0) {
      uVar4 = *param_3;
      if ((uVar4 & 0xf0) != 0xe0) {
        if ((((*(uint *)(param_1 + 4) ^ uVar4) & *(uint *)(param_1 + 8)) != 0) &&
           ((uVar4 & 0xffff) != 0xfea9)) {
          if (*(int *)(param_1 + 0xc) == 0) {
            return 0xfffffffc;
          }
          param_3 = (uint *)(param_1 + 0xc);
        }
        uVar4 = (uint)DAT_ram_3fcc5344;
        iVar1 = uVar4 * 0x18;
        puVar5 = &DAT_ram_3fcc2578;
        if ((((byte)(&DAT_ram_3fcc258c)[iVar1] < 2) ||
            (*(int *)(&DAT_ram_3fcc2580 + iVar1) != param_1)) ||
           (*param_3 != *(uint *)(&DAT_ram_3fcc257c + iVar1))) {
          uVar4 = 0;
          while ((((byte)puVar5[0x14] < 2 || (*(int *)(puVar5 + 8) != param_1)) ||
                 (*param_3 != *(uint *)(puVar5 + 4)))) {
            uVar4 = uVar4 + 1 & 0xff;
            puVar5 = puVar5 + 0x18;
            if (uVar4 == 10) {
              uVar2 = FUN_ram_4205ac4c(param_1,param_3,param_2);
              return uVar2;
            }
          }
          DAT_ram_3fcc5344 = (byte)uVar4;
        }
        uVar2 = FUN_ram_4205aba4(param_1,param_2,uVar4);
        return uVar2;
      }
      uStack_18 = 1;
      uStack_16 = 0x5e;
      puVar3 = &uStack_18;
      bStack_15 = *(byte *)((int)param_3 + 1) & 0x7f;
      uStack_14 = *(undefined1 *)((int)param_3 + 2);
      uStack_13 = *(undefined1 *)((int)param_3 + 3);
    }
    else {
      puVar3 = (undefined2 *)&DAT_ram_3c0f759c;
    }
    uVar2 = FUN_ram_4205c318(param_1,param_2,param_1 + 0x32,puVar3,0x800);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

