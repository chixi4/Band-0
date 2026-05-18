
undefined4 FUN_ram_42022b7c(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  char acStack_2bc [16];
  undefined1 auStack_2ac [33];
  byte abStack_28b [6];
  char cStack_285;
  char cStack_284;
  undefined1 auStack_280 [96];
  undefined1 auStack_220 [516];
  
  iVar2 = FUN_ram_42021d5a();
  uVar5 = 0;
  if (iVar2 == 0) {
    uVar5 = 0x3c0a85ec;
  }
  iVar3 = FUN_ram_4202284c(param_1,iVar2 == 0,uVar5);
  if ((((iVar3 == 0) && (iVar3 = FUN_ram_42022538(param_1,&DAT_ram_3c0c1c10), iVar3 == 0)) &&
      (iVar3 = FUN_ram_42022538(param_1," to move."), iVar3 == 0)) &&
     (iVar3 = FUN_ram_42022538(param_1,"Ask whether the payoff justifies the urgent request."),
     iVar3 == 0)) {
    iVar3 = 0;
    if (iVar2 == 0) {
      iVar2 = FUN_ram_42022538(param_1,"ff justifies the urgent request.");
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    else {
      do {
        iVar4 = FUN_ram_42021d64(iVar3,auStack_2ac);
        if (iVar4 != 0) break;
        puVar6 = auStack_2ac;
        pcVar9 = acStack_2bc;
        do {
          pbVar1 = puVar6 + 0x21;
          pcVar10 = pcVar9 + 2;
          cVar7 = "HwABAJ0vf/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACT/wAAD8ZAAJf/gAAP8BHAQBvAf4AAH+AGQAAXwD/AAB/fgABX/h/AAD+ZQABb/4/gAD8cEsAAG8HH4AA/GAZAABfAx+AAPyWAAIfnxkA//////+8DPkFBNwFIgP8HAAQMN4HJj/wGQAoB44ZABbgGQAiDgcZAAECACYwABkANhwDgGcACBkA2hgBjPBmAgIDMDwwIEAZAMfP+GYGBwMw/jBwwDFLANg4AM8cZgYDBjHHGHDAfQDnMADODGMGAwYxgxjwwDivAPYAMADMDGMMAYYzAZjRgHAwlgD2ADAAzAxhDAGMM/+YmYAAOBkA9gA4AcwMYYgBjDP/jZmAABgZANgYAYwMYZgAzDMADYkAGQCBHAGMDGCYANgZABdgMgDYDAMMDGDQAFgxgYcPAH0A9gAPDwwMYPAAcDHDBw8AOHBkAOcD/gwMYHAAcDD+BwYAH+EA9gAA8AQEQGAAIDA4AgYAB4AyAAECAAVfAQcsAQECAAi/BwTbAV8AAAAAAxkABgIgAAICAAgyAAkCAA8ZACYIdwACXAIDSwAYw2AACBkAHwMZAB70Ak/B4E4eA8AI4A8GYA8weCAQsQj0As/H8P8/D+Af+D+H4D+w/jAwGQD3AMMOGOHjnDAOHHHHADDxhxkA9QEMHOHBmDAMDGDGAGBxAxhgMgDYDAzAwZwADAzAZgBgcBkA5x/8wIGPAAwO/+YAYDAfMgD1AR/8wIGH4AgG/+YAYDH/DMBLAOcYAMCBgPAMDsAGAGAzgxkA6AwAwIGAMAwMwAYAYHMDGQAxDMCBlgB1ZgBgcwcHgEsA9QEOGMCBnDAOHHDGADDzjweGGQD0Acf4wcGP4Av4P4YAP7H7Aw4ZAPQCQcHgQIEDwAjgDgYADiDzAwQZAAN2ARMICAAVA6kBAxEABBkAHAYZABMcIQAcHhkABDIAByADDQIAAw0CDRgAC5YABwIADzIA//////8LCBMIBAIAAdIPDwQQBQ82EAYPaBAGD5oQBg/MEAYPmRABAf4QDzARBg/kEAEBYhEPlBEGD8YRBg/4EQYPAgCvUAAAAAAA"
                  [(*pbVar1 & 0xf) + 0x1f0];
          puVar6 = puVar6 + 1;
          *pcVar9 = "HwABAJ0vf/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACT/wAAD8ZAAJf/gAAP8BHAQBvAf4AAH+AGQAAXwD/AAB/fgABX/h/AAD+ZQABb/4/gAD8cEsAAG8HH4AA/GAZAABfAx+AAPyWAAIfnxkA//////+8DPkFBNwFIgP8HAAQMN4HJj/wGQAoB44ZABbgGQAiDgcZAAECACYwABkANhwDgGcACBkA2hgBjPBmAgIDMDwwIEAZAMfP+GYGBwMw/jBwwDFLANg4AM8cZgYDBjHHGHDAfQDnMADODGMGAwYxgxjwwDivAPYAMADMDGMMAYYzAZjRgHAwlgD2ADAAzAxhDAGMM/+YmYAAOBkA9gA4AcwMYYgBjDP/jZmAABgZANgYAYwMYZgAzDMADYkAGQCBHAGMDGCYANgZABdgMgDYDAMMDGDQAFgxgYcPAH0A9gAPDwwMYPAAcDHDBw8AOHBkAOcD/gwMYHAAcDD+BwYAH+EA9gAA8AQEQGAAIDA4AgYAB4AyAAECAAVfAQcsAQECAAi/BwTbAV8AAAAAAxkABgIgAAICAAgyAAkCAA8ZACYIdwACXAIDSwAYw2AACBkAHwMZAB70Ak/B4E4eA8AI4A8GYA8weCAQsQj0As/H8P8/D+Af+D+H4D+w/jAwGQD3AMMOGOHjnDAOHHHHADDxhxkA9QEMHOHBmDAMDGDGAGBxAxhgMgDYDAzAwZwADAzAZgBgcBkA5x/8wIGPAAwO/+YAYDAfMgD1AR/8wIGH4AgG/+YAYDH/DMBLAOcYAMCBgPAMDsAGAGAzgxkA6AwAwIGAMAwMwAYAYHMDGQAxDMCBlgB1ZgBgcwcHgEsA9QEOGMCBnDAOHHDGADDzjweGGQD0Acf4wcGP4Av4P4YAP7H7Aw4ZAPQCQcHgQIEDwAjgDgYADiDzAwQZAAN2ARMICAAVA6kBAxEABBkAHAYZABMcIQAcHhkABDIAByADDQIAAw0CDRgAC5YABwIADzIA//////8LCBMIBAIAAdIPDwQQBQ82EAYPaBAGD5oQBg/MEAYPmRABAf4QDzARBg/kEAEBYhEPlBEGD8YRBg/4EQYPAgCvUAAAAAAA"
                    [(*pbVar1 >> 4) + 0x1f0];
          pcVar9[1] = cVar7;
          pcVar9 = pcVar10;
        } while (acStack_2bc + 0xc != pcVar10);
        acStack_2bc[0xc] = 0;
        FUN_ram_420229f2(auStack_280,auStack_2ac);
        cVar7 = '\x03';
        if (cStack_285 < -0x3d) {
          cVar7 = (-0x50 < cStack_285) + '\x01';
        }
        if (cStack_284 == '\0') {
          puVar11 = &DAT_ram_3c0c39bc;
        }
        else {
          puVar11 = &DAT_ram_3c0c1bf0;
        }
        if (cVar7 == '\x01') {
          puVar12 = &DAT_ram_3c0c1c0c;
LAB_ram_42022d42:
          puVar8 = &DAT_ram_3c0c1c0c;
        }
        else {
          puVar8 = &DAT_ram_3c0c3754;
          puVar12 = &DAT_ram_3c0c3754;
          if (cVar7 != '\x03') goto LAB_ram_42022d42;
        }
        uVar5 = (*(code *)&SUB_ram_400106ac)
                          (auStack_220,0x200,"x problem into three executable blocks.",acStack_2bc,
                           auStack_280,puVar11,&DAT_ram_3c0c3754,puVar12,puVar8);
        iVar4 = FUN_ram_4206632e(param_1,auStack_220,uVar5);
        if (iVar4 != 0) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
      } while (iVar2 != iVar3);
    }
    iVar2 = FUN_ram_42022538(param_1,"you want to move.");
    if ((iVar2 == 0) && (iVar2 = FUN_ram_42022538(param_1,&DAT_ram_3c0c1de4), iVar2 == 0)) {
      uVar5 = FUN_ram_4202281c(param_1);
      return uVar5;
    }
  }
  return 0xffffffff;
}

