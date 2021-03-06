/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSNumber;



@interface ASPingItem : ASItem 
{
    NSArray *_folders;
    NSNumber *_heartBeatInterval;
    NSNumber *_maxFolders;
    NSNumber *_status;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (id)asParseRules;
- (void)dealloc;
- (id)description;
- (void)setFolders:(id)arg1;
- (id)folders;
- (id)heartBeatInterval;
- (void)setHeartBeatInterval:(id)arg1;
- (id)maxFolders;
- (void)setMaxFolders:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;

@end
