# UE 4.9 Bug

UDN: https://udn.unrealengine.com/questions/267931/49410-opened-blueprint-corrupts-after-another-blue.html

## Steps to reproduce problem

 * Open project InstancedProperty.uproject
 * Open blueprint ContainerBp
 * Open blueprint InstancedBp
 * Compile blueprint InstancedBp

**Expected result**: ContainerBp still have a correct InstancedBp data.

**Actual result**: ContainerBp have InstancedBp with empty fields.

![Screenshot](screenshot.png)