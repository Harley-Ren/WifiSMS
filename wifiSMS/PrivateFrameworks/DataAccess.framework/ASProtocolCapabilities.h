/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;



@interface ASProtocolCapabilities : NSObject 
{
    NSString *_calConstraintsPlistPath;
    NSString *_abConstraintsPlistPath;
}


- (id)initWithProtocolVersionString:(id)arg1;
- (void)dealloc;
- (BOOL)supportsProtocolVersion:(id)arg1;
- (BOOL)supportsMailboxSearch;
- (BOOL)supportsSettingsCommand;
- (BOOL)supportsItemOperationsCommand;
- (id)_calConstraintsPlistPath;
- (id)calendarConstraintsPath;
- (id)_abConstraintsPlistPath;
- (id)addressBookConstraintsPath;

@end
