
void FUN_ram_420ad778(void)

{
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [24];
  
  FUN_ram_420ad4f0(auStack_70,auStack_64,auStack_58,auStack_1c,auStack_40,auStack_4c,auStack_34,0xc,
                   auStack_28);
  (*(code *)&SUB_ram_40012298)
            (auStack_70,auStack_64,auStack_58,auStack_1c,auStack_40,auStack_4c,auStack_34,0xc,
             auStack_28);
  return;
}

