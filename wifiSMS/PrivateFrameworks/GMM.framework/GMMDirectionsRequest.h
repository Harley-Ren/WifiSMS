/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, GMMDateTime, GMMDirectionsIconRequest, GMMMapInfo;



@interface GMMDirectionsRequest : PBRequest 
{
    NSMutableArray *_modes;
    NSMutableArray *_waypoints;
    GMMDateTime *_requestedDateTime;
    NSInteger _requestedTimeType;
    BOOL _hasRequestedTimeType;
    NSInteger _tripMaxCount;
    BOOL _hasTripMaxCount;
    GMMDirectionsIconRequest *_iconRequest;
    NSInteger _requestedResultType;
    BOOL _hasRequestedResultType;
    NSInteger _resultPageOffset;
    BOOL _hasResultPageOffset;
    GMMMapInfo *_mapViewport;
    NSMutableArray *_optionss;
    BOOL _includeStreetViewPanoId;
    BOOL _hasIncludeStreetViewPanoId;
    BOOL _addStepNoticesToInstructionText;
    BOOL _hasAddStepNoticesToInstructionText;
    BOOL _includeStructuredInstructions;
    BOOL _hasIncludeStructuredInstructions;
    BOOL _returnMultipleRoutes;
    BOOL _hasReturnMultipleRoutes;
}

@property(readonly) NSInteger modesCount;
@property(readonly) NSInteger waypointsCount;
@property(readonly) BOOL hasRequestedDateTime;
@property(readonly) BOOL hasIconRequest;
@property(readonly) BOOL hasMapViewport;
@property(readonly) NSInteger optionssCount;
@property(readonly) BOOL hasReturnMultipleRoutes; /* unknown property attribute: V_hasReturnMultipleRoutes */
@property BOOL returnMultipleRoutes; /* unknown property attribute: V_returnMultipleRoutes */
@property(readonly) BOOL hasIncludeStructuredInstructions; /* unknown property attribute: V_hasIncludeStructuredInstructions */
@property BOOL includeStructuredInstructions; /* unknown property attribute: V_includeStructuredInstructions */
@property(readonly) BOOL hasAddStepNoticesToInstructionText; /* unknown property attribute: V_hasAddStepNoticesToInstructionText */
@property BOOL addStepNoticesToInstructionText; /* unknown property attribute: V_addStepNoticesToInstructionText */
@property(readonly) BOOL hasIncludeStreetViewPanoId; /* unknown property attribute: V_hasIncludeStreetViewPanoId */
@property BOOL includeStreetViewPanoId; /* unknown property attribute: V_includeStreetViewPanoId */
@property(retain) NSMutableArray *optionss; /* unknown property attribute: V_optionss */
@property(retain) GMMMapInfo *mapViewport; /* unknown property attribute: V_mapViewport */
@property(readonly) BOOL hasResultPageOffset; /* unknown property attribute: V_hasResultPageOffset */
@property NSInteger resultPageOffset; /* unknown property attribute: V_resultPageOffset */
@property(readonly) BOOL hasRequestedResultType; /* unknown property attribute: V_hasRequestedResultType */
@property NSInteger requestedResultType; /* unknown property attribute: V_requestedResultType */
@property(retain) GMMDirectionsIconRequest *iconRequest; /* unknown property attribute: V_iconRequest */
@property(readonly) BOOL hasTripMaxCount; /* unknown property attribute: V_hasTripMaxCount */
@property NSInteger tripMaxCount; /* unknown property attribute: V_tripMaxCount */
@property(readonly) BOOL hasRequestedTimeType; /* unknown property attribute: V_hasRequestedTimeType */
@property NSInteger requestedTimeType; /* unknown property attribute: V_requestedTimeType */
@property(retain) GMMDateTime *requestedDateTime; /* unknown property attribute: V_requestedDateTime */
@property(retain) NSMutableArray *waypoints; /* unknown property attribute: V_waypoints */
@property(retain) NSMutableArray *modes; /* unknown property attribute: V_modes */


- (id)init;
- (void)dealloc;
- (NSInteger)modesCount;
- (void)setMode:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (NSInteger)modeAtIndex:(NSUInteger)arg1;
- (void)addMode:(NSInteger)arg1;
- (NSInteger)waypointsCount;
- (void)setWaypoint:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)waypointAtIndex:(NSUInteger)arg1;
- (void)addWaypoint:(id)arg1;
- (BOOL)hasRequestedDateTime;
- (void)setRequestedTimeType:(NSInteger)arg1;
- (void)setTripMaxCount:(NSInteger)arg1;
- (BOOL)hasIconRequest;
- (void)setRequestedResultType:(NSInteger)arg1;
- (void)setResultPageOffset:(NSInteger)arg1;
- (BOOL)hasMapViewport;
- (NSInteger)optionssCount;
- (void)setOptions:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)optionsAtIndex:(NSUInteger)arg1;
- (void)addOptions:(id)arg1;
- (void)setIncludeStreetViewPanoId:(BOOL)arg1;
- (void)setAddStepNoticesToInstructionText:(BOOL)arg1;
- (void)setIncludeStructuredInstructions:(BOOL)arg1;
- (void)setReturnMultipleRoutes:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (Class)responseClass;
- (NSUInteger)requestTypeCode;
- (id)description;
- (BOOL)hasReturnMultipleRoutes;
- (BOOL)returnMultipleRoutes;
- (BOOL)hasIncludeStructuredInstructions;
- (BOOL)includeStructuredInstructions;
- (BOOL)hasAddStepNoticesToInstructionText;
- (BOOL)addStepNoticesToInstructionText;
- (BOOL)hasIncludeStreetViewPanoId;
- (BOOL)includeStreetViewPanoId;
- (id)optionss;
- (void)setOptionss:(id)arg1;
- (id)mapViewport;
- (void)setMapViewport:(id)arg1;
- (BOOL)hasResultPageOffset;
- (NSInteger)resultPageOffset;
- (BOOL)hasRequestedResultType;
- (NSInteger)requestedResultType;
- (id)iconRequest;
- (void)setIconRequest:(id)arg1;
- (BOOL)hasTripMaxCount;
- (NSInteger)tripMaxCount;
- (BOOL)hasRequestedTimeType;
- (NSInteger)requestedTimeType;
- (id)requestedDateTime;
- (void)setRequestedDateTime:(id)arg1;
- (id)waypoints;
- (void)setWaypoints:(id)arg1;
- (id)modes;
- (void)setModes:(id)arg1;

@end
