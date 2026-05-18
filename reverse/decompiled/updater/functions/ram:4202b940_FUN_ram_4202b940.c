
int FUN_ram_4202b940(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  uint auStack_14 [2];
  
  iVar2 = FUN_ram_4202b91a(param_1,param_2,auStack_14,param_3);
  if (iVar2 == 0) {
    if ((auStack_14[0] == 0) || (bVar1 = false, uVar5 = auStack_14[0], *(char *)*param_1 < '\0')) {
LAB_ram_4202b95a:
      iVar2 = -100;
    }
    else {
      do {
        pcVar3 = (char *)*param_1;
        if (*pcVar3 != '\0') {
          if (bVar1) {
            auStack_14[0] = uVar5;
          }
          if ((4 < uVar5) || ((uVar5 == 4 && (*pcVar3 < '\0')))) goto LAB_ram_4202b95a;
          goto LAB_ram_4202b99e;
        }
        *param_1 = pcVar3 + 1;
        uVar5 = uVar5 - 1;
        bVar1 = true;
      } while (uVar5 != 0);
      auStack_14[0] = 0;
LAB_ram_4202b99e:
      *param_4 = 0;
      while (auStack_14[0] = auStack_14[0] - 1, auStack_14[0] != 0xffffffff) {
        pbVar4 = (byte *)*param_1;
        *param_4 = *param_4 << 8 | (uint)*pbVar4;
        *param_1 = pbVar4 + 1;
      }
    }
  }
  return iVar2;
}

