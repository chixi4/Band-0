
int FUN_ram_42014ba8(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  if (param_3 == (uint *)0x0) {
    return 0x102;
  }
  if ((*param_3 & 8) != 0) {
    return 0x102;
  }
  if (param_2 == -1) {
    param_1 = 0;
  }
  else {
    if (param_1 == 0) {
      return 0x102;
    }
    iVar2 = (*(code *)&SUB_ram_400104a8)();
    if (param_2 != iVar2) {
      return 0x102;
    }
  }
  if (((((((param_3[9] == 0) && (param_3[10] == 0)) && (param_3[0xb] == 0)) &&
        ((param_3[0xc] == 0 && (param_3[0xd] == 0)))) && (param_3[0xe] == 0)) &&
      (((param_3[0xf] == 0 && (param_3[0x10] == 0)) &&
       ((param_3[0x11] == 0 &&
        (((param_3[0x12] == 0 && (param_3[0x13] == 0)) && (param_3[0x14] == 0)))))))) &&
     (((param_3[0x18] == 0 && (param_3[0x19] == 0)) &&
      ((param_3[0x1a] == 0 && (param_3[0x1b] == 0)))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_ram_40390448(0x40,0x1000);
    if (uVar3 == 0) {
      uVar1 = 0;
      uVar5 = 0;
      goto LAB_ram_42014cca;
    }
  }
  if ((((param_3[0x1c] == 0) && (param_3[0x1d] == 0)) &&
      ((param_3[0x1e] == 0 &&
       (((param_3[0x1f] == 0 && (param_3[0x20] == 0)) && (param_3[0x21] == 0)))))) &&
     (param_3[0x22] == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_ram_40390448(0x1c,0x1000);
    if (uVar5 == 0) {
      uVar1 = 0;
      goto LAB_ram_42014cca;
    }
  }
  if (((param_3[0x23] == 0) && (param_3[0x24] == 0)) &&
     (((param_3[0x25] == 0 && ((param_3[0x26] == 0 && (param_3[0x27] == 0)))) &&
      (param_3[0x28] == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_ram_40390448(0x18,0x1000);
    if (uVar1 == 0) goto LAB_ram_42014cca;
  }
  if (uVar3 != 0) {
    local_70 = param_3[9];
    uStack_6c = param_3[10];
    uStack_68 = param_3[0xb];
    uStack_64 = param_3[0xc];
    uStack_60 = param_3[0xd];
    uStack_5c = param_3[0xe];
    uStack_58 = param_3[0xf];
    uStack_54 = param_3[0x10];
    uStack_50 = param_3[0x11];
    uStack_4c = param_3[0x12];
    uStack_48 = param_3[0x13];
    uStack_44 = param_3[0x14];
    uStack_40 = param_3[0x18];
    uStack_3c = param_3[0x19];
    uStack_38 = param_3[0x1a];
    uStack_34 = param_3[0x1b];
    FUN_ram_40399daa(uVar3,&local_70,0x40);
  }
  if (uVar5 != 0) {
    local_70 = param_3[0x1c];
    uStack_6c = param_3[0x1d];
    uStack_68 = param_3[0x1e];
    uStack_64 = param_3[0x1f];
    uStack_60 = param_3[0x20];
    uStack_5c = param_3[0x21];
    uStack_58 = param_3[0x22];
    FUN_ram_40399daa(uVar5,&local_70,0x1c);
  }
  if (uVar1 != 0) {
    local_70 = param_3[0x23];
    uStack_6c = param_3[0x24];
    uStack_68 = param_3[0x25];
    uStack_64 = param_3[0x26];
    uStack_60 = param_3[0x27];
    uStack_5c = param_3[0x28];
    FUN_ram_40399daa(uVar1,&local_70,0x18);
  }
  local_70 = param_3[1];
  uStack_6c = param_3[2];
  uStack_68 = param_3[3];
  uStack_64 = param_3[4];
  uStack_60 = param_3[5];
  uStack_5c = param_3[6];
  uStack_58 = param_3[7];
  uStack_54 = param_3[8];
  uStack_50 = param_3[0x15];
  uStack_4c = param_3[0x16];
  uStack_48 = param_3[0x17];
  uStack_44 = uVar3;
  uStack_40 = uVar5;
  uStack_3c = uVar1;
  iVar2 = FUN_ram_40390448(0x38,0x1000);
  if (iVar2 != 0) {
    FUN_ram_40399daa(iVar2,&local_70,0x38);
    iVar4 = FUN_ram_420148f4(param_1,iVar2,*param_3,param_4,param_5);
    if (iVar4 == 0) {
      return 0;
    }
    FUN_ram_420148be(iVar2);
    return iVar4;
  }
LAB_ram_42014cca:
  thunk_FUN_ram_40390608(uVar3);
  thunk_FUN_ram_40390608(uVar5);
  thunk_FUN_ram_40390608(uVar1);
  return 0x101;
}

