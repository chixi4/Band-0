
void FUN_ram_420aa2b8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1;
  while (piVar1 = piVar2, piVar1 != (int *)0x0) {
    FUN_ram_420a85ae(piVar1 + 0x33);
    FUN_ram_4206d7d4(piVar1[100]);
    FUN_ram_4206ed34(piVar1[0x1a]);
    FUN_ram_4206ed34(piVar1[0x22]);
    FUN_ram_4206ebe2(piVar1[0x5d]);
    FUN_ram_4206ebe2(piVar1[0x41]);
    FUN_ram_4206ebe2(piVar1[0x55]);
    FUN_ram_4206ebe2(piVar1[0x4b]);
    if ((piVar1[3] != 0) && (*piVar1 != 0)) {
      FUN_ram_4206d7fc(piVar1[3],piVar1[2]);
    }
    piVar2 = (int *)piVar1[0x65];
    FUN_ram_4206d7da(piVar1,0x198);
    if (piVar1 != param_1) {
      FUN_ram_4206d7d4(piVar1);
    }
  }
  return;
}

