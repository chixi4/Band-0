
int FUN_ram_4209b430(int param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  *param_2 = 0x30;
  param_2[3] = 0;
  param_2[2] = 1;
  iVar2 = FUN_ram_4209c930(2,*(undefined4 *)(param_1 + 0xc));
  if (iVar2 != 0) {
    param_2[4] = (char)((uint)iVar2 >> 0x18);
    param_2[5] = (char)((uint)iVar2 >> 0x10);
    param_2[6] = (char)((uint)iVar2 >> 8);
    param_2[7] = (char)iVar2;
    iVar2 = FUN_ram_4209c9e0(param_2 + 10,*(undefined4 *)(param_1 + 0x20));
    pcVar6 = param_2 + 10 + iVar2 * 4;
    if (iVar2 != 0) {
      param_2[9] = (char)((uint)iVar2 >> 8);
      param_2[8] = (char)iVar2;
      pcVar5 = pcVar6 + 2;
      uVar4 = *(uint *)(param_1 + 4) & 1;
      if (uVar4 != 0) {
        pcVar6[3] = '\x0f';
        pcVar6[4] = -0x54;
        pcVar6[2] = '\0';
        pcVar6[5] = '\x01';
        pcVar5 = pcVar6 + 6;
      }
      if ((*(uint *)(param_1 + 4) & 2) != 0) {
        pcVar5[1] = '\x0f';
        pcVar5[2] = -0x54;
        *pcVar5 = '\0';
        pcVar5[3] = '\x02';
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 4;
      }
      if ((*(uint *)(param_1 + 4) & 0x80) != 0) {
        pcVar5[1] = '\x0f';
        pcVar5[2] = -0x54;
        *pcVar5 = '\0';
        pcVar5[3] = '\x05';
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 4;
      }
      cVar3 = (char)uVar4;
      if ((*(uint *)(param_1 + 4) & 0x100) == 0) {
        if (uVar4 == 0) {
          return -1;
        }
      }
      else {
        pcVar5[1] = '\x0f';
        pcVar5[2] = -0x54;
        *pcVar5 = '\0';
        pcVar5[3] = '\x06';
        cVar3 = cVar3 + '\x01';
        pcVar5 = pcVar5 + 4;
      }
      pcVar6[1] = '\0';
      *pcVar6 = cVar3;
      uVar1 = (ushort)(*(int *)(param_1 + 0x24) != 0);
      if (*(int *)(param_1 + 0x2c) != 0) {
        uVar1 = uVar1 | 0xc;
      }
      uVar1 = uVar1 | (ushort)*(byte *)(param_1 + 0x55) << 0xb |
                      (ushort)*(byte *)(param_1 + 0x54) << 10;
      if (*(int *)(param_1 + 0x40) != 0) {
        if (*(int *)(param_1 + 0x40) == 2) {
          uVar1 = uVar1 | 0xc0;
        }
        else {
          uVar1 = uVar1 | 0x80;
        }
      }
      pcVar5[1] = (char)(uVar1 >> 8);
      *pcVar5 = (char)uVar1;
      pcVar6 = pcVar5 + 2;
      if (param_4 != 0) {
        pcVar6 = pcVar5 + 0x14;
        if (param_2 + param_3 < pcVar6) {
          return -1;
        }
        pcVar5[3] = '\0';
        pcVar5[2] = '\x01';
        FUN_ram_4039c11e(pcVar5 + 4,param_4,0x10);
      }
      if (*(int *)(param_1 + 0x40) != 0) {
        if (param_2 + param_3 < pcVar6 + 6) {
          return -1;
        }
        if (param_4 == 0) {
          pcVar6[1] = '\0';
          *pcVar6 = '\0';
          pcVar6 = pcVar6 + 2;
        }
        cVar3 = '\v';
        if ((param_5 != 0x2000) && (cVar3 = '\f', param_5 != 0x4000)) {
          cVar3 = '\x06';
        }
        pcVar6[1] = '\x0f';
        *pcVar6 = '\0';
        pcVar6[2] = -0x54;
        pcVar6[3] = cVar3;
        pcVar6 = pcVar6 + 4;
      }
      param_2[1] = (char)((int)pcVar6 - (int)param_2) + -2;
      return (int)pcVar6 - (int)param_2;
    }
  }
  return -1;
}

