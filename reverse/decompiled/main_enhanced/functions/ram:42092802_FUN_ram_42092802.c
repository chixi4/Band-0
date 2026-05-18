
void FUN_ram_42092802(char *param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (*param_1 == '\0') {
    FUN_ram_42094a62(param_1[1],*(undefined4 *)(param_1 + 4),param_1[8]);
    return;
  }
  pcVar3 = *(char **)(param_1 + 0x14);
  iVar2 = (*(code *)&SUB_ram_40011e78)();
  if (iVar2 != 0) {
    uVar1 = *(undefined1 *)((uint)(byte)param_1[1] * 10 + 0x3fcc462b);
    (*(code *)&SUB_ram_40011ea4)
              (iVar2,param_1[0xc],(byte)param_1[0x1a] & 3,(int)(uint)(byte)param_1[0x1a] >> 2 & 7);
    *(char *)(iVar2 + 0x82) = param_1[0xc];
    if (pcVar3 != (char *)0x0) {
      *(char *)(iVar2 + 0x87) = pcVar3[1];
      if (*pcVar3 != '\0') {
        *(undefined1 *)(iVar2 + 0x82) = 6;
      }
    }
    (*(code *)&LAB_ram_40011ea8)
              (iVar2,(*(int *)(param_1 + 0x10) + 0x60) * 0x1000000 >> 0x18,uVar1,param_1[0x18],
               param_1[0x19]);
    return;
  }
  return;
}

