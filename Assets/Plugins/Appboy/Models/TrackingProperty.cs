namespace Appboy.Models {
  /// <summary>
  /// The category of Braze SDK properties to be marked for user tracking.
  /// </summary>
  public static class TrackingProperty {
      /// <summary>
      /// Mark all custom attributes for tracking.
      /// </summary>
      public const string AllCustomAttributes = "all_custom_attributes";

      /// <summary>
      /// Mark all custom events for tracking.
      /// </summary>
      public const string AllCustomEvents = "all_custom_events";

      /// <summary>
      /// Braze events for analytics.
      /// </summary>
      public const string AnalyticsEvents = "analytics_events";

      /// <summary>
      /// The user's attribution data.
      /// </summary>
      public const string AttributionData = "attribution_data";

      /// <summary>
      /// The user's country.
      /// </summary>
      public const string Country = "country";

      /// <summary>
      /// The user's date of birth.
      /// </summary>
      public const string DateOfBirth = "dob";

      /// <summary>
      /// The user's device data.
      /// </summary>
      public const string DeviceData = "device_data";

      /// <summary>
      /// The user's email address.
      /// </summary>
      public const string Email = "email";

      /// <summary>
      /// The user's email subscription state.
      /// </summary>
      public const string EmailSubscriptionState = "email_subscription_state";

      /// <summary>
      /// Mark every user data for tracking.
      /// Adding this property will cause other cases to be a no-op as everything will be routed to the tracking domain.
      /// </summary>
      public const string Everything = "everything";

      /// <summary>
      /// The user's first name.
      /// </summary>
      public const string FirstName = "first_name";

      /// <summary>
      /// The user's gender.
      /// </summary>
      public const string Gender = "gender";

      /// <summary>
      /// The user's home city.
      /// </summary>
      public const string HomeCity = "home_city";

      /// <summary>
      /// The user's language.
      /// </summary>
      public const string Language = "language";

      /// <summary>
      /// The user's last name.
      /// </summary>
      public const string LastName = "last_name";

      /// <summary>
      /// The user's notification subscription state.
      /// </summary>
      public const string NotificationSubscriptionState = "notification_subscription_state";

      /// <summary>
      /// The user's phone number.
      /// </summary>
      public const string PhoneNumber = "phone_number";

      /// <summary>
      /// The user's push token.
      /// </summary>
      public const string PushToken = "push_token";
  }
}