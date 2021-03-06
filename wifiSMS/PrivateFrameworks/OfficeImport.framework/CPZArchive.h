/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, <CPZArchiveInputStream>;



@interface CPZArchive : NSObject 
{
    NSMutableDictionary *mEntries;
    <CPZArchiveInputStream> *mInput;
}


- (id)initWithPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)entryWithName:(id)arg1;
- (void)readEntries;
- (struct CPZEndOfCentralDirectory { unsigned long long x1; unsigned long long x2; unsigned long long x3; })readEndOfCentralDirectory;
- (const char *)searchForEndOfCentralDirectory;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long)arg2;

@end
