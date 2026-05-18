
int FUN_ram_420a9594(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                    uint param_6,undefined4 param_7,uint param_8,undefined4 param_9,uint param_10,
                    int *param_11)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int iStack_17c;
  int iStack_178;
  undefined1 auStack_174 [16];
  undefined1 auStack_164 [32];
  undefined1 uStack_144;
  undefined1 auStack_143 [271];
  
  iStack_188 = 0;
  if ((param_5 == 0) && (param_6 != 0)) {
    return -0x1f80;
  }
  iVar1 = FUN_ram_4206a944(param_3);
  if (iVar1 == 0) {
    return -0x1f00;
  }
  uVar4 = *(uint *)(iVar1 + 4);
  uVar6 = uVar4 >> 8 & 0xf;
  uVar5 = param_8;
  if (param_2 == 0) {
joined_r0x420a97a0:
    if (param_10 < uVar5) {
      return -0x6c;
    }
  }
  else if (param_2 == 1) {
    uVar5 = ((uVar4 & 0x1f) + param_8) - param_8 % (uVar4 & 0x1f);
    goto joined_r0x420a97a0;
  }
  uStack_184 = 0;
  uVar5 = uVar4 >> 5 & 7;
  if (0x80 < param_6) {
    return -0x1f80;
  }
  uStack_180 = 0;
  iStack_17c = 0;
  iStack_178 = 0;
  (*(code *)&SUB_ram_40010488)(&uStack_144,0,0x102);
  iVar7 = param_1[2] + param_1[1];
  if (*param_1 != 0x30) {
    return -0x1ee2;
  }
  iVar2 = FUN_ram_4206e970(param_1 + 2,iVar7,&iStack_17c,4);
  if (iVar2 == 0) {
    iStack_178 = param_1[2];
    param_1[2] = iStack_178 + iStack_17c;
    iVar2 = FUN_ram_4206ea58(param_1 + 2,iVar7,&uStack_184);
    if (iVar2 == 0) {
      if (iVar7 != param_1[2]) {
        return -0x1ee6;
      }
      goto LAB_ram_420a96b4;
    }
  }
  if (iVar2 + -0x1e80 != 0) {
    return iVar2 + -0x1e80;
  }
LAB_ram_420a96b4:
  puVar3 = &uStack_144;
  for (uVar4 = 0; param_6 != uVar4; uVar4 = uVar4 + 1) {
    puVar3[1] = *(undefined1 *)(param_5 + uVar4);
    puVar3 = puVar3 + 2;
  }
  iVar2 = (param_6 + 1) * 2;
  iVar7 = FUN_ram_420a92d6(auStack_164,uVar6 << 3,&uStack_144,iVar2,iStack_178,iStack_17c,param_4,1,
                           uStack_184);
  if (iVar7 == 0) {
    iVar7 = uVar5 << 2;
    if ((uVar5 != 0) &&
       (iVar2 = FUN_ram_420a92d6(auStack_174,iVar7,&uStack_144,iVar2,iStack_178,iStack_17c,param_4,2
                                 ,uStack_184), iVar2 != 0)) {
      return iVar2;
    }
    FUN_ram_4206a9a6(&uStack_144);
    iVar1 = FUN_ram_4206a9fa(&uStack_144,iVar1);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_ram_4206aa52(&uStack_144,auStack_164,uVar6 << 6,param_2), iVar1 == 0)) &&
       (iVar1 = FUN_ram_4206af48(&uStack_144,0), iVar1 == 0)) {
      iVar1 = FUN_ram_4206afea(&uStack_144,auStack_174,iVar7,param_7,param_8,param_9,&iStack_188);
      if (iVar1 == -0x6200) {
        iVar1 = -0x1e00;
      }
      *param_11 = *param_11 + iStack_188;
    }
    FUN_ram_4206d7da(auStack_164,0x20);
    FUN_ram_4206d7da(auStack_174,0x10);
    FUN_ram_4206a9b4(&uStack_144);
    return iVar1;
  }
  return iVar7;
}

