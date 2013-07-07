/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CLHeading, CLLocation, NSSet, NSString;

@interface CLLocationManager : NSObject
{
    id _internal;
}

+ (BOOL)bundleSupported:(id)arg1;
+ (BOOL)shutdownDaemon;
+ (BOOL)dumpLogsWithMessage:(id)arg1;
+ (void)setDefaultEffectiveBundle:(id)arg1;
+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundleIdentifier:(id)arg2;
+ (int)authorizationStatus;
+ (int)_authorizationStatus;
+ (int)authorizationStatusForBundle:(id)arg1;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1;
+ (int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (BOOL)deferredLocationUpdatesAvailable;
+ (BOOL)mapCorrectionAvailable;
+ (BOOL)isRangingAvailable;
+ (BOOL)regionMonitoringEnabled;
+ (BOOL)regionMonitoringAvailable;
+ (BOOL)isMonitoringAvailableForClass:(Class)arg1;
+ (BOOL)significantLocationChangeMonitoringAvailable;
+ (BOOL)headingAvailable;
+ (void)setLocationServicesEnabled:(BOOL)arg1;
+ (BOOL)locationServicesEnabled:(BOOL)arg1;
+ (BOOL)locationServicesEnabled;
+ (id)sharedManager;
+ (void)setEntityAuthorized:(BOOL)arg1 forLocationDictionary:(id)arg2;
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)arg1;
+ (BOOL)hasUsedBackgroundLocationServices:(id)arg1;
+ (id)dateLocationLastUsedForLocationDictionary:(id)arg1;
+ (unsigned int)activeLocationServiceTypesForLocationDictionary:(id)arg1;
+ (BOOL)isLocationActiveForLocationDictionary:(id)arg1;
+ (unsigned int)entityClassesForLocationDictionary:(id)arg1;
+ (unsigned int)primaryEntityClassForLocationDictionary:(id)arg1;
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned int)arg1;
+ (void)setStatusBarIconEnabled:(BOOL)arg1 forLocationEntityClass:(unsigned int)arg2;
- (void)registerAsLocationClient;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(nonatomic, getter=isPersistentMonitoringEnabled) BOOL persistentMonitoringEnabled;
- (void)onClientEventInterrupted:(id)arg1;
- (void)onClientEventBatch:(id)arg1;
- (void)onClientEventAutopauseStatus:(id)arg1;
- (void)onDidBecomeActive:(id)arg1;
- (void)pauseLocationUpdates:(BOOL)arg1;
- (void)resumeLocationUpdates;
- (void)onClientEventRegionSetupCompleted:(id)arg1;
- (void)onClientEventRegionResponseDelayed:(id)arg1;
- (void)onClientEventRangingError:(id)arg1;
- (void)onClientEventRanging:(id)arg1;
- (void)onClientEventRegionError:(id)arg1;
- (void)onClientEventRegionState:(id)arg1;
- (void)onClientEventRegion:(id)arg1;
- (void)onClientEventError:(id)arg1;
- (void)onClientEventHistoricLocation:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventLocationUnavailable:(id)arg1;
- (void)onClientEventLocation:(id)arg1;
- (void)onClientEventAuthStatus:(id)arg1;
- (void)onClientEvent:(int)arg1 supportInfo:(id)arg2;
- (id)technologiesInUse;
- (id)appsUsingLocationWithDetails;
- (id)appsUsingLocation;
- (void)resetApps;
@property(readonly, nonatomic) NSSet *rangedRegions;
- (void)stopRangingBeaconsInRegion:(id)arg1;
- (void)startRangingBeaconsInRegion:(id)arg1;
@property(readonly, nonatomic) NSSet *monitoredRegions;
@property(readonly, nonatomic) double maximumRegionMonitoringDistance;
- (void)requestStateForRegion:(id)arg1;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2;
- (void)stopMonitoringSignificantLocationChanges;
- (void)startMonitoringSignificantLocationChanges;
- (void)stopTechStatusUpdates;
- (void)startTechStatusUpdates;
- (void)stopAppStatusUpdates;
- (void)startAppStatusUpdates;
- (void)dismissHeadingCalibrationDisplay;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
@property(readonly, nonatomic) CLHeading *heading;
@property(nonatomic) int headingOrientation;
@property(nonatomic) double headingFilter;
@property(readonly, nonatomic) BOOL headingAvailable;
- (void)historicLocationsFromDate:(id)arg1 forInterval:(double)arg2;
- (void)disallowDeferredLocationUpdates;
- (void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)startUpdatingLocationWithPrompt;
@property(nonatomic) int activityType;
@property(copy, nonatomic) NSString *purpose;
@property(nonatomic) BOOL privateMode;
@property(readonly, nonatomic) struct __CLClient *internalClient;
@property(readonly, nonatomic) double bestAccuracy;
@property(nonatomic) BOOL supportInfo;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(readonly, nonatomic) BOOL locationServicesApproved;
@property(readonly, nonatomic) BOOL locationServicesEnabled;
@property(readonly, nonatomic) BOOL locationServicesAvailable;
@property(readonly, nonatomic) CLLocation *location;
@property(nonatomic) BOOL pausesLocationUpdatesAutomatically;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
@property(nonatomic) id <CLLocationManagerDelegate> delegate;
- (void)dealloc;
- (id)initWithEffectiveBundle:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)init;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2;

@end
