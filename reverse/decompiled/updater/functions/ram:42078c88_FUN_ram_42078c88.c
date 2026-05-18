
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42078c88(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uStack_14;
  
  iVar1 = _DAT_ram_3fcdfde4;
  if (param_2 == 0) {
    iVar1 = *param_1;
  }
  puVar4 = *(uint **)(iVar1 + 0x24);
  uVar6 = *puVar4;
  iVar3 = *(int *)(*(int *)(iVar1 + 4) + 4);
  if ((uVar6 & 0x40000) != 0) {
    iVar3 = iVar3 + 8;
  }
  if ((uVar6 & 0x400000) == 0) {
    if ((uVar6 & 0x80) == 0) {
      if ((param_1[3] & 0xff00ff00U) == 0) {
        if ((((((short)param_1[6] == 0) || ((char)param_1[7] != '\0')) ||
             (*(char *)(((puVar4[4] >> 0x14 & 0xf) + 1) * 0x30 + _DAT_ram_3fcdfdec) != '\0')) ||
            (((uVar6 & 0x402) != 0 || ((uVar6 & 0x480000) == 0x400000)))) ||
           (((uVar6 & 0x40088) != 8 ||
            ((*(int *)(iVar1 + 0x1c) == 0 || (*(char *)(*(int *)(iVar1 + 0x1c) + 0x82) != '\x01'))))
           )) {
          if ((byte)((char)puVar4[3] - 0x10U) < 0x10) goto LAB_ram_42078cc4;
        }
        else {
          iVar3 = (*(code *)&SUB_ram_40011c10)(puVar4[1] >> 4 & 0xf);
          if (iVar3 != 0) {
            cVar2 = (*(code *)&SUB_ram_40011e40)(iVar1,(short)param_1[6]);
            *(char *)(param_1 + 7) = cVar2;
            puVar4 = *(uint **)(iVar1 + 0x24);
            if (cVar2 == '\0') {
              (*(code *)&SUB_ram_40011c14)(puVar4[1] >> 4 & 0xf);
            }
            else {
              *puVar4 = *puVar4 | 0x100;
            }
          }
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 7) = 0;
      if ((uVar6 & 0x40) == 0) {
        for (iVar3 = *(int *)(iVar1 + 0x20); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
          *(char *)(param_1 + 7) = (char)param_1[7] + '\x01';
        }
      }
    }
  }
  else {
LAB_ram_42078cc4:
    *(undefined2 *)(iVar3 + 2) = *(undefined2 *)((int)puVar4 + 10);
  }
  puVar4 = *(uint **)(iVar1 + 0x24);
  if (*(char *)(gp + 0x5de) != '\0') {
    cVar2 = (char)puVar4[3];
    if (*(char *)(gp + 0x5dd) == '\0') {
      if (2 < (byte)(cVar2 - 1U)) goto LAB_ram_42078d0e;
      bVar5 = cVar2 + 4;
    }
    else {
      bVar5 = cVar2 - 4;
      if (3 < bVar5) goto LAB_ram_42078d0e;
    }
    *(byte *)(puVar4 + 3) = bVar5;
  }
LAB_ram_42078d0e:
  iVar3 = _DAT_ram_6004d000;
  if ((*puVar4 & 0x400000) == 0) {
    iVar7 = *(int *)(gp + 0x5b8);
  }
  else {
    iVar7 = *(int *)(gp + 0x5b0);
  }
  uStack_14 = iVar7 << 10;
  FUN_ram_4039aa00(iVar1,_DAT_ram_6004d000,&uStack_14);
  uVar6 = 10;
  uVar8 = (uStack_14 - iVar3) + *(int *)(*(int *)(iVar1 + 0x24) + 0x18);
  if ((uVar8 < uStack_14) && (uVar6 = uVar8 >> 10, uVar6 == 0)) {
    uVar6 = 1;
  }
  FUN_ram_4039b53c(param_1,uVar6);
  FUN_ram_4204d872(param_1,_DAT_ram_3fcdfdec);
  return;
}

