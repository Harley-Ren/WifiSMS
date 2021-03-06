/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, NSString, NSArray;



@interface ISSoftwareApplication : NSObject 
{
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_itemIdentifier;
    NSNumber *_storeFrontIdentifier;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
}

@property(retain) NSArray *versionOrdering; /* unknown property attribute: V_versionOrdering */
@property(retain) NSNumber *versionIdentifier; /* unknown property attribute: V_versionIdentifier */
@property(retain) NSNumber *storeFrontIdentifier; /* unknown property attribute: V_storeFrontIdentifier */
@property(retain) NSNumber *itemIdentifier; /* unknown property attribute: V_itemIdentifier */
@property(retain) NSString *bundleVersion; /* unknown property attribute: V_bundleVersion */
@property(retain) NSString *bundleIdentifier; /* unknown property attribute: V_bundleIdentifier */
@property(retain) NSString *accountIdentifier; /* unknown property attribute: V_accountIdentifier */
@property(retain) NSNumber *accountDSID; /* unknown property attribute: V_accountDSID */


- (id)initWithMobileInstallationDictionary:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)_loadMetadataFromContainer:(id)arg1;
- (id)versionOrdering;
- (void)setVersionOrdering:(id)arg1;
- (id)versionIdentifier;
- (void)setVersionIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (void)setStoreFrontIdentifier:(id)arg1;
- (id)itemIdentifier;
- (void)setItemIdentifier:(id)arg1;
- (id)bundleVersion;
- (void)setBundleVersion:(id)arg1;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountDSID;
- (void)setAccountDSID:(id)arg1;

@end
