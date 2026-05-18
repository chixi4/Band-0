
undefined4
FUN_ram_42060d5a(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)*param_2) {
      if (param_2[1] == *(int *)(param_1 + 0x70)) {
        FUN_ram_40399daa(*(int *)(param_1 + 0x7c) + 0x13c,param_2 + 6,param_2[0xe]);
        iVar3 = *(int *)(param_1 + 0x7c);
        *(undefined4 *)(iVar3 + 0x15c) = param_2[0xe];
        *(undefined4 *)(iVar3 + 0xdc) = param_6;
        iVar1 = FUN_ram_40399d6c(param_3,param_4,6);
        *(byte *)(iVar3 + 0x94) = *(byte *)(iVar3 + 0x94) & 0xfe | 0 < iVar1;
        FUN_ram_4206587c(*(undefined4 *)(iVar3 + 0x8c));
        *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x8c) = 0;
        if (param_5 != 0) {
          iVar1 = FUN_ram_4202293e(param_5);
          iVar3 = FUN_ram_4206582a(iVar1 << 1);
          iVar4 = 0;
          if (iVar3 == 0) {
            return 0xffffffff;
          }
          for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
            FUN_ram_4205f4b8(iVar3,*(undefined2 *)(iVar4 * 4 + param_5));
          }
          *(int *)(*(int *)(param_1 + 0x7c) + 0x8c) = iVar3;
        }
        if (param_2[2] != 0) {
          FUN_ram_4205e51c(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x58),1);
          iVar3 = *(int *)(param_1 + 0x7c);
          uVar2 = FUN_ram_420604bc(param_2,param_3,param_4);
          iVar1 = *(int *)(param_1 + 0x7c);
          *(undefined4 *)(iVar3 + 0x58) = uVar2;
          if (*(int *)(iVar1 + 0x58) == 0) {
            return 0xffffffff;
          }
        }
        if (param_2[4] != 0) {
          FUN_ram_4206636c(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x5c),1);
          iVar3 = *(int *)(param_1 + 0x7c);
          uVar2 = FUN_ram_42060652(param_2,param_3,param_4);
          iVar1 = *(int *)(param_1 + 0x7c);
          *(undefined4 *)(iVar3 + 0x5c) = uVar2;
          if (*(int *)(iVar1 + 0x5c) == 0) {
            return 0xffffffff;
          }
        }
        *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
        uVar2 = FUN_ram_4205f3c2(param_1);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

