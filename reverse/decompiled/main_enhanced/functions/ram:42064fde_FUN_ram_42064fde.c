
undefined4 FUN_ram_42064fde(int *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_34;
  undefined2 uStack_30;
  ushort uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  uVar2 = 0x102;
  if ((param_2 != 0) && (uVar1 = *(ushort *)(param_2 + 0x1c), uVar1 < 10)) {
    puVar3 = (undefined4 *)FUN_ram_4039c08e(1,0x408);
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = FUN_ram_4039c08e(*(undefined2 *)(param_2 + 0x1e),4);
      puVar3[0x1f] = iVar4;
      if (iVar4 != 0) {
        iVar5 = FUN_ram_4039c08e(uVar1,0xc0);
        puVar3[0x1d] = iVar5;
        if (iVar5 != 0) {
          iVar6 = FUN_ram_4039c08e(*(undefined2 *)(param_2 + 0x20),8);
          puVar3[0xf5] = iVar6;
          if (iVar6 != 0) {
            iVar7 = FUN_ram_4039c08e(0xd,4);
            puVar3[0x100] = iVar7;
            if (iVar7 != 0) {
              FUN_ram_4039c11e(puVar3,param_2,0x60);
              iVar4 = FUN_ram_42051600(2,1,0);
              if (-1 < iVar4) {
                _uStack_30 = CONCAT22(*(ushort *)(puVar3 + 6) >> 8 | *(ushort *)(puVar3 + 6) << 8,
                                      0x200);
                uStack_2c = 0;
                uStack_28 = 0;
                uStack_24 = 0;
                uStack_34 = 1;
                FUN_ram_42051b14(iVar4,0xfff,4,&uStack_34);
                iVar5 = FUN_ram_4205109a(iVar4,&uStack_30);
                if (((-1 < iVar5) &&
                    (iVar5 = FUN_ram_420512a2(iVar4,*(undefined2 *)((int)puVar3 + 0x22)), -1 < iVar5
                    )) && (iVar5 = FUN_ram_420669e6(*(undefined2 *)((int)puVar3 + 0x1a)), -1 < iVar5
                          )) {
                  iVar6 = FUN_ram_42051600(2,2,0x11);
                  if (-1 < iVar6) {
                    puVar3[0x1a] = iVar6;
                    puVar3[0x18] = iVar4;
                    puVar3[0x19] = iVar5;
                    FUN_ram_42065e4e(puVar3);
                    iVar4 = FUN_ram_420b5b94(0x42054d5c,"rrow\'s priority order before sleep.",
                                             *(undefined2 *)(puVar3 + 1),puVar3,*puVar3,
                                             puVar3 + 0x1b,puVar3[2],puVar3[3]);
                    if (iVar4 != 1) {
                      FUN_ram_42064c92(puVar3);
                      return 0xb008;
                    }
                    *param_1 = (int)puVar3;
                    FUN_ram_42064d46(1,0,0);
                    return 0;
                  }
                  FUN_ram_420b1020(iVar4);
                  iVar4 = iVar5;
                }
                FUN_ram_420b1020(iVar4);
              }
              FUN_ram_42064c92(puVar3);
              return 0xffffffff;
            }
            thunk_FUN_ram_40390634(iVar6);
          }
          thunk_FUN_ram_40390634(iVar5);
        }
        thunk_FUN_ram_40390634(iVar4);
      }
      thunk_FUN_ram_40390634(puVar3);
    }
    uVar2 = 0xb007;
  }
  return uVar2;
}

