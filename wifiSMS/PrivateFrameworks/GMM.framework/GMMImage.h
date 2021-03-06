/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData, NSString;



@interface GMMImage : PBCodable 
{
    NSString *_key;
    NSInteger _type;
    NSData *_imageData;
}

@property(readonly) BOOL hasKey;
@property(readonly) BOOL hasImageData;
@property(retain) NSData *imageData; /* unknown property attribute: V_imageData */
@property NSInteger type; /* unknown property attribute: V_type */
@property(retain) NSString *key; /* unknown property attribute: V_key */


- (id)init;
- (void)dealloc;
- (BOOL)hasKey;
- (BOOL)hasImageData;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)key;
- (void)setKey:(id)arg1;

@end
